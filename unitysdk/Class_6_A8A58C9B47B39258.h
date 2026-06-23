#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_4D247F7A2D4BBC48.h"
#include "unitysdk/Enum_3_A6875CC70890641D.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"

class Class_1_CF69DA127BBBD8F0;
class Class_2_CD42631606067E6B;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_6_A8A58C9B47B39258_METHOD_6_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x1719C960)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x1719C270)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_1_OFFSET UNITYSDK_OFFSET(0x1719C170)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x1719B670)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_247C15FF5EDC5F21_OFFSET UNITYSDK_OFFSET(0x1719C2D0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_37980CAE6BD29586_OFFSET UNITYSDK_OFFSET(0x1719BD20)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_47A94975B0610A2C_OFFSET UNITYSDK_OFFSET(0x1719BA00)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x1719C2E0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_85E43FE58216B6E3_OFFSET UNITYSDK_OFFSET(0x1719BD30)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_964EB1D417FCEEA3_OFFSET UNITYSDK_OFFSET(0x1719C970)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_9C814A85CBF45139_OFFSET UNITYSDK_OFFSET(0x1719B6C0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_1_OFFSET UNITYSDK_OFFSET(0x1719C090)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_OFFSET UNITYSDK_OFFSET(0x1719B980)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_B1CB585367F577B7_OFFSET UNITYSDK_OFFSET(0x1719C4A0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1719C210)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1719B860)
#define CLASS_6_A8A58C9B47B39258__CCTOR_OFFSET UNITYSDK_OFFSET(0x1719BD10)
#define CLASS_6_A8A58C9B47B39258__CTOR_OFFSET UNITYSDK_OFFSET(0x1719BBA0)

inline static constexpr unsigned int Class_6_A8A58C9B47B39258_TypeDefinitionIndex = 44487;

class Class_6_A8A58C9B47B39258 : public ::Class_5_4D247F7A2D4BBC48
{
public:
	static ::System::Boolean* StaticGet_Field_6_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_6_A8A58C9B47B39258_TypeDefinitionIndex)->GetStaticField(0xC6F0);
	}
	// static const ::System::String* Field_6_1; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_6_4; // 0x108
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_8A77D15D7EA8B8D3>* Field_6_3; // 0x110
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_6_2; // 0x118
	::System::Boolean Field_6_5; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258__CCTOR_OFFSET))();
	}

	::System::Boolean Method_6_205A14011EEBDE57(::Enum_3_A6875CC70890641D& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_A6875CC70890641D&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_OFFSET))(this, a1);
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

	::System::Void Method_6_47A94975B0610A2C(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_47A94975B0610A2C_OFFSET))(this, a1);
	}

	::System::Void Method_6_37980CAE6BD29586(::Class_2_CD42631606067E6B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CD42631606067E6B*&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_37980CAE6BD29586_OFFSET))(this, a1);
	}

	::System::Void Method_6_85E43FE58216B6E3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_85E43FE58216B6E3_OFFSET))(this, a1);
	}

	::System::Int32 Method_6_A529EDDD1E3116C3_1(::MoleMole::Config::BuddyTeamType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BuddyTeamType))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_6_205A14011EEBDE57_1(::Enum_3_A6875CC70890641D& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_A6875CC70890641D&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_6_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_6_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_1DA89DF9585853CF_OFFSET))(a1);
	}

	::System::Void Method_6_247C15FF5EDC5F21(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_247C15FF5EDC5F21_OFFSET))(this, a1);
	}

	::System::Void Method_6_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_6_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	static ::System::Void Method_6_964EB1D417FCEEA3(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_964EB1D417FCEEA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_6_B1CB585367F577B7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_B1CB585367F577B7_OFFSET))(a1);
	}
};
