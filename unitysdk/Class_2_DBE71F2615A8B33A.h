#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_16A256D5A30981C7.h"

class Class_1_08ACCB48C394B420;
class Class_3_1E4F9B0ED3BF21DE;
class Class_3_B942B51FF20C85B4;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimTrainModeDisplayInfos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_DBE71F2615A8B33A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8ADB80)
#define CLASS_2_DBE71F2615A8B33A_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xB8AE390)
#define CLASS_2_DBE71F2615A8B33A_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0xB8ADED0)
#define CLASS_2_DBE71F2615A8B33A_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xB8AE610)
#define CLASS_2_DBE71F2615A8B33A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8ADBD0)
#define CLASS_2_DBE71F2615A8B33A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8AE520)
#define CLASS_2_DBE71F2615A8B33A_TICK_OFFSET UNITYSDK_OFFSET(0xB8AE580)
#define CLASS_2_DBE71F2615A8B33A__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8AE880)
#define CLASS_2_DBE71F2615A8B33A__CTOR_OFFSET UNITYSDK_OFFSET(0xB8ADB70)

inline static constexpr unsigned int Class_2_DBE71F2615A8B33A_TypeDefinitionIndex = 52876;

class Class_2_DBE71F2615A8B33A : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::Class_1_08ACCB48C394B420** StaticGet_HOIJHGMGPKK()
	{
		return (::Class_1_08ACCB48C394B420**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DBE71F2615A8B33A_TypeDefinitionIndex)->GetStaticField(0x5FBF0);
	}
	// static const ::System::Single JHMIABDLKNJ; // 0x0
	::Il2CppArray<::Struct_2_16A256D5A30981C7>* KAGPCNICGGG; // 0x18
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x20
	::Class_3_B942B51FF20C85B4* OFKGLJOAMLD; // 0x28
	::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0x30
	::System::String* AFOPPLHPNJG; // 0x38
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
	::RPG::Client::FiveDimTrainModeDisplayInfos* OGHHCMNOHPN; // 0x48
	::System::Int16 JJKAKOGGDBO; // 0x50
	::System::Int16 DNCNBPLAOBM; // 0x52
	::System::Single BPGPEHBJDHP; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B942B51FF20C85B4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B942B51FF20C85B4*))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_METHOD_2_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBE71F2615A8B33A_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}
};
