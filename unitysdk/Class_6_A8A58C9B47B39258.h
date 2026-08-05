#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_4B10204F20C4D73A_1.h"
#include "unitysdk/Enum_3_C856E655551E512E.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"

class Class_1_CF69DA127BBBD8F0;
class Class_2_CD42631606067E6B;
namespace MoleMole { class UIInLevelPauseDialogContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_6_A8A58C9B47B39258_METHOD_6_0CD1E239AC13EBB7_OFFSET UNITYSDK_OFFSET(0x169E4220)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x169E4EF0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_1_OFFSET UNITYSDK_OFFSET(0x169E5780)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x169E3E90)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x169E4AE0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x169E5820)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_8F6CC42C9A35A98E_OFFSET UNITYSDK_OFFSET(0x169E5410)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_964EB1D417FCEEA3_OFFSET UNITYSDK_OFFSET(0x169E4D10)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0x169E4AF0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_9C814A85CBF45139_OFFSET UNITYSDK_OFFSET(0x169E3EE0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_1_OFFSET UNITYSDK_OFFSET(0x169E4C30)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_OFFSET UNITYSDK_OFFSET(0x169E41A0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_B1CB585367F577B7_OFFSET UNITYSDK_OFFSET(0x169E4F50)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_B2C7B816FDABA590_OFFSET UNITYSDK_OFFSET(0x169E4B70)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x169E59E0)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x169E4B10)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x169E4080)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_D20BD6C944921F7A_OFFSET UNITYSDK_OFFSET(0x169E4790)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x169E4840)
#define CLASS_6_A8A58C9B47B39258_METHOD_6_F3F1448890844EDB_OFFSET UNITYSDK_OFFSET(0x169E4B00)
#define CLASS_6_A8A58C9B47B39258__CCTOR_OFFSET UNITYSDK_OFFSET(0x169E4AD0)
#define CLASS_6_A8A58C9B47B39258__CTOR_OFFSET UNITYSDK_OFFSET(0x169E4960)

inline static constexpr unsigned int Class_6_A8A58C9B47B39258_TypeDefinitionIndex = 81701;

class Class_6_A8A58C9B47B39258 : public ::Class_5_4B10204F20C4D73A_1
{
public:
	static ::System::Boolean* StaticGet_Field_6_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_6_A8A58C9B47B39258_TypeDefinitionIndex)->GetStaticField(0x11D90);
	}
	// static const ::System::String* Field_6_7; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_8A77D15D7EA8B8D3>* Field_6_5; // 0x138
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_6_6; // 0x140
	::System::Collections::Generic::List_1<::System::Int32>* Field_6_4; // 0x148
	::System::Boolean Field_6_11; // 0x150

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258__CCTOR_OFFSET))();
	}

	::System::Boolean Method_6_205A14011EEBDE57(::Enum_3_C856E655551E512E& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_C856E655551E512E&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_OFFSET))(this, a1);
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

	::MoleMole::UIInLevelPauseDialogContext* Method_6_0CD1E239AC13EBB7()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_0CD1E239AC13EBB7_OFFSET))(this);
	}

	::System::Void Method_6_D20BD6C944921F7A(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_D20BD6C944921F7A_OFFSET))(this, a1);
	}

	::System::Void Method_6_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_6_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_6_9A6D1D47E588E644(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_9A6D1D47E588E644_OFFSET))(this, a1);
	}

	::System::Void Method_6_F3F1448890844EDB(::Class_2_CD42631606067E6B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CD42631606067E6B*&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_F3F1448890844EDB_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_6_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_CE34EA208837238D_OFFSET))();
	}

	::MoleMole::UIInLevelPauseDialogContext* Method_6_B2C7B816FDABA590()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_B2C7B816FDABA590_OFFSET))(this);
	}

	::System::Int32 Method_6_A529EDDD1E3116C3_1(::MoleMole::Config::BuddyTeamType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BuddyTeamType))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_A529EDDD1E3116C3_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_6_964EB1D417FCEEA3(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_964EB1D417FCEEA3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_6_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::System::Void Method_6_B1CB585367F577B7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_B1CB585367F577B7_OFFSET))(a1);
	}

	::System::Void Method_6_8F6CC42C9A35A98E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_8F6CC42C9A35A98E_OFFSET))(this, a1);
	}

	::System::Boolean Method_6_205A14011EEBDE57_1(::Enum_3_C856E655551E512E& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_C856E655551E512E&))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_205A14011EEBDE57_1_OFFSET))(this, a1);
	}

	::System::Void Method_6_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_6_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A8A58C9B47B39258_METHOD_6_B387E1AED8A8F880_OFFSET))(this);
	}
};
