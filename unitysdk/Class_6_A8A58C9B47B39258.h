#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_2410D3FBF75F6E38.h"
#include "unitysdk/Enum_3_D9968D936B3A50DA.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"

class Class_2_CD42631606067E6B;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_6_A8A58C9B47B39258_METHOD_6_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x105D3C00)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_1_OFFSET UNITYSDK_OFFSET(0x105D3C60)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x105D31F0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x105D3B10)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x105D3D00)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_85E43FE58216B6E3_OFFSET UNITYSDK_OFFSET(0x105D37B0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_964EB1D417FCEEA3_OFFSET UNITYSDK_OFFSET(0x105D4390)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x105D3720)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_9C814A85CBF45139_OFFSET UNITYSDK_OFFSET(0x105D3240)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_1_OFFSET UNITYSDK_OFFSET(0x105D3B20)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_OFFSET UNITYSDK_OFFSET(0x105D3500)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_B1CB585367F577B7_OFFSET UNITYSDK_OFFSET(0x105D3EC0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x105D36C0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x105D33E0)
#define CLASS_6_A8A58C9B47B39258__CCTOR_OFFSET UNITYSDK_OFFSET(0x105D36B0)
#define CLASS_6_A8A58C9B47B39258__CTOR_OFFSET UNITYSDK_OFFSET(0x105D3580)

inline static constexpr unsigned int Class_6_A8A58C9B47B39258_TypeDefinitionIndex = 75767;

class Class_6_A8A58C9B47B39258 : public ::Class_5_2410D3FBF75F6E38
{
public:
	static ::System::Boolean* StaticGet_Field_6_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_6_A8A58C9B47B39258_TypeDefinitionIndex)->GetStaticField(0x11400);
	}
	// static const ::System::String* Field_6_1; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_6_2; // 0x108
	::System::Collections::Generic::List_1<::System::Int32>* Field_6_4; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_8A77D15D7EA8B8D3>* Field_6_3; // 0x118
	::System::Boolean Field_6_5; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258__CCTOR_OFFSET))();
	}

	::System::Boolean Method_6_205A14011EEBDE57(::Enum_3_D9968D936B3A50DA& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_D9968D936B3A50DA&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_OFFSET))(this, a1);
	}

	::System::Void Method_6_9C814A85CBF45139(::Class_2_CD42631606067E6B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CD42631606067E6B*&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_9C814A85CBF45139_OFFSET))(this, a1);
	}

	::System::Void Method_6_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Int32 Method_6_A529EDDD1E3116C3(::MoleMole::Config::BuddyTeamType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BuddyTeamType))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_6_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_CE34EA208837238D_OFFSET))();
	}

	::System::Void Method_6_98511BB23D2E3748(::Class_2_CD42631606067E6B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CD42631606067E6B*&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_6_85E43FE58216B6E3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_85E43FE58216B6E3_OFFSET))(this, a1);
	}

	::System::Void Method_6_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Int32 Method_6_A529EDDD1E3116C3_1(::MoleMole::Config::BuddyTeamType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BuddyTeamType))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_6_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_1DA89DF9585853CF_OFFSET))(a1);
	}

	::System::Boolean Method_6_205A14011EEBDE57_1(::Enum_3_D9968D936B3A50DA& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_D9968D936B3A50DA&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_1_OFFSET))(this, a1);
	}

	::System::Void Method_6_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_4DE65AB3A4860CEB_OFFSET))(this);
	}

	static ::System::Void Method_6_B1CB585367F577B7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_B1CB585367F577B7_OFFSET))(a1);
	}

	static ::System::Void Method_6_964EB1D417FCEEA3(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_964EB1D417FCEEA3_OFFSET))(a1, a2);
	}
};
