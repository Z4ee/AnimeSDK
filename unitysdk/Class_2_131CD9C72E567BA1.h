#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA642DEE53091501.h"

class Class_1_3B1EA953A4067E26;
class Class_1_43BD383C98B4C0C5_207;
class Class_1_8E042314AFF884FB_18;
class Class_1_A92BC063ED2379EB;
class Class_1_B58468E7171EFB5E;
class Class_2_B66C1067C0468FBB;
class Class_2_FB9CF047C8AEAA83;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_131CD9C72E567BA1_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x134C4350)
#define CLASS_2_131CD9C72E567BA1_METHOD_2_251700BAF824A8FD_OFFSET UNITYSDK_OFFSET(0x134C4760)
#define CLASS_2_131CD9C72E567BA1_METHOD_2_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x134C42E0)
#define CLASS_2_131CD9C72E567BA1_METHOD_2_A0249D6CFFA87BE3_OFFSET UNITYSDK_OFFSET(0x134C43B0)
#define CLASS_2_131CD9C72E567BA1__CTOR_OFFSET UNITYSDK_OFFSET(0x134C4DD0)

inline static constexpr unsigned int Class_2_131CD9C72E567BA1_TypeDefinitionIndex = 77011;

class Class_2_131CD9C72E567BA1 : public ::Class_1_AA642DEE53091501
{
public:
	::Class_1_B58468E7171EFB5E* KOHNGCOONLN; // 0x10
	::Class_2_FB9CF047C8AEAA83* FGHLCBFGPEE; // 0x18
	::Class_1_8E042314AFF884FB_18* HBONDIFNNHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_131CD9C72E567BA1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4E22A18EF530BFA8(::Class_3_E6ABB31B8050F1C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_2_131CD9C72E567BA1_METHOD_2_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_2_131CD9C72E567BA1_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A0249D6CFFA87BE3(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_207*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_207*&))((::PBYTE)hIl2Cpp + CLASS_2_131CD9C72E567BA1_METHOD_2_A0249D6CFFA87BE3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_251700BAF824A8FD(::Class_1_A92BC063ED2379EB* a1, ::Class_2_B66C1067C0468FBB* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::Class_2_B66C1067C0468FBB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_131CD9C72E567BA1_METHOD_2_251700BAF824A8FD_OFFSET))(this, a1, a2, a3);
	}
};
