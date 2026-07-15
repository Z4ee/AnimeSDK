#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_50.h"
#include "unitysdk/System/Object.h"

class Class_1_3504E309EE87A23B;
class Class_1_EDC297F37134E4CE;
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_51C144CA4DE074AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181A0530)
#define CLASS_1_51C144CA4DE074AC_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x181A04D0)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x181A04E0)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_47F2555F83B8DAE1_OFFSET UNITYSDK_OFFSET(0x181A05D0)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_7326A523B5D39B37_OFFSET UNITYSDK_OFFSET(0x181A0C90)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x181A11E0)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181A0500)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_F9F3538A031EA7E8_OFFSET UNITYSDK_OFFSET(0x181A04F0)
#define CLASS_1_51C144CA4DE074AC__CTOR_OFFSET UNITYSDK_OFFSET(0x181A0510)

inline static constexpr unsigned int Class_1_51C144CA4DE074AC_TypeDefinitionIndex = 66198;

class Class_1_51C144CA4DE074AC : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* Field_1_0; // 0x10
	::Class_1_EDC297F37134E4CE* Field_1_1; // 0x18
	::Il2CppArray<::Class_1_3504E309EE87A23B*>* Field_1_2; // 0x20
	::RPG::GameCore::RuntimeGroupInfo* Field_1_3; // 0x28
	::System::UInt32 _GroupID_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_EDC297F37134E4CE* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a3, ::RPG::GameCore::RuntimeGroupInfo* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EDC297F37134E4CE*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_GET_GROUPID_OFFSET))(this);
	}

	::Class_1_EDC297F37134E4CE* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EDC297F37134E4CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_3504E309EE87A23B*>* Method_1_F9F3538A031EA7E8()
	{
		return ((::Il2CppArray<::Class_1_3504E309EE87A23B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_F9F3538A031EA7E8_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_47F2555F83B8DAE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_47F2555F83B8DAE1_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	static ::Struct_2_CC45B4503679E14E_50 Method_1_7326A523B5D39B37(::RPG::GameCore::LevelPedestrianV2Info* a1, ::System::Collections::Generic::IEnumerable_1<::Struct_2_CC45B4503679E14E_50>* a2)
	{
		return ((::Struct_2_CC45B4503679E14E_50(*)(::RPG::GameCore::LevelPedestrianV2Info*, ::System::Collections::Generic::IEnumerable_1<::Struct_2_CC45B4503679E14E_50>*))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_7326A523B5D39B37_OFFSET))(a1, a2);
	}
};
