#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0429476DED843B63;
namespace RPG::GameCore { class ConvincePlayOptionTalk; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_55019C89B24976B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7F2630)
#define CLASS_2_55019C89B24976B0_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0xB7F35C0)
#define CLASS_2_55019C89B24976B0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB7F3640)
#define CLASS_2_55019C89B24976B0_METHOD_2_619D51B179243081_OFFSET UNITYSDK_OFFSET(0xB7F3390)
#define CLASS_2_55019C89B24976B0_METHOD_2_7411494DA7276605_OFFSET UNITYSDK_OFFSET(0xB7F31E0)
#define CLASS_2_55019C89B24976B0_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xB7F34F0)
#define CLASS_2_55019C89B24976B0_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xB7F3400)
#define CLASS_2_55019C89B24976B0_METHOD_2_B897C8703A29D609_OFFSET UNITYSDK_OFFSET(0xB7F2C60)
#define CLASS_2_55019C89B24976B0_METHOD_2_E8F71BC8471C5469_1_OFFSET UNITYSDK_OFFSET(0xB7F2680)
#define CLASS_2_55019C89B24976B0_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0xB7F2810)
#define CLASS_2_55019C89B24976B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7F29A0)
#define CLASS_2_55019C89B24976B0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7F2EC0)
#define CLASS_2_55019C89B24976B0_TICK_OFFSET UNITYSDK_OFFSET(0xB7F2F10)
#define CLASS_2_55019C89B24976B0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F2590)

inline static constexpr unsigned int Class_2_55019C89B24976B0_TypeDefinitionIndex = 52985;

class Class_2_55019C89B24976B0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x18
	::RPG::GameCore::ConvincePlayOptionTalk* OFKGLJOAMLD; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x28
	::System::String* NCCEFIDOIHM; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Boolean BKPCHGDNEFH; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvincePlayOptionTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvincePlayOptionTalk*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_E8F71BC8471C5469_1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_619D51B179243081(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_619D51B179243081_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7411494DA7276605(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_7411494DA7276605_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ABEB23FF62F8B8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_0ABEB23FF62F8B8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B897C8703A29D609(::Class_1_0429476DED843B63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0429476DED843B63*))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_B897C8703A29D609_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55019C89B24976B0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
