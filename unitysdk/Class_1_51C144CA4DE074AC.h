#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_51.h"
#include "unitysdk/System/Object.h"

class Class_1_375BC79DC2945ABF;
class Class_1_F8E6AA28A352CA0E;
namespace RPG::GameCore { class LevelPedestrianV2Info; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_51C144CA4DE074AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C28180)
#define CLASS_1_51C144CA4DE074AC_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x14C28060)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x14C280F0)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14C28090)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x14C28070)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_7326A523B5D39B37_OFFSET UNITYSDK_OFFSET(0x14C29080)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_B33A0124EE91262B_OFFSET UNITYSDK_OFFSET(0x14C281D0)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_E52985E18AFC8E88_OFFSET UNITYSDK_OFFSET(0x14C28650)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_EB886948936D8C2D_OFFSET UNITYSDK_OFFSET(0x14C28E00)
#define CLASS_1_51C144CA4DE074AC_METHOD_1_F9F3538A031EA7E8_OFFSET UNITYSDK_OFFSET(0x14C28080)
#define CLASS_1_51C144CA4DE074AC__CTOR_OFFSET UNITYSDK_OFFSET(0x14C28150)

inline static constexpr unsigned int Class_1_51C144CA4DE074AC_TypeDefinitionIndex = 69247;

class Class_1_51C144CA4DE074AC : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* BLIOECEONGF; // 0x10
	::Il2CppArray<::Class_1_F8E6AA28A352CA0E*>* CCECMIKFAME; // 0x18
	::RPG::GameCore::RuntimeGroupInfo* DMIJAIJDKNP; // 0x20
	::Class_1_375BC79DC2945ABF* KGCNPIEDOCA; // 0x28
	::System::UInt32 _GroupID_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_375BC79DC2945ABF* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a3, ::RPG::GameCore::RuntimeGroupInfo* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_375BC79DC2945ABF*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_GET_GROUPID_OFFSET))(this);
	}

	::Class_1_375BC79DC2945ABF* Method_1_24748FC20F375725()
	{
		return ((::Class_1_375BC79DC2945ABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_F8E6AA28A352CA0E*>* Method_1_F9F3538A031EA7E8()
	{
		return ((::Il2CppArray<::Class_1_F8E6AA28A352CA0E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_F9F3538A031EA7E8_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_F8E6AA28A352CA0E*>* Method_1_E52985E18AFC8E88(::System::Boolean a1)
	{
		return ((::Il2CppArray<::Class_1_F8E6AA28A352CA0E*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_E52985E18AFC8E88_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_F8E6AA28A352CA0E*>* Method_1_B33A0124EE91262B(::System::Boolean a1)
	{
		return ((::Il2CppArray<::Class_1_F8E6AA28A352CA0E*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_B33A0124EE91262B_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_EB886948936D8C2D(::System::Collections::Generic::IList_1<::Class_1_F8E6AA28A352CA0E*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::Class_1_F8E6AA28A352CA0E*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_EB886948936D8C2D_OFFSET))(a1, a2);
	}

	static ::Struct_2_CC45B4503679E14E_51 Method_1_7326A523B5D39B37(::RPG::GameCore::LevelPedestrianV2Info* a1, ::System::Collections::Generic::IEnumerable_1<::Struct_2_CC45B4503679E14E_51>* a2)
	{
		return ((::Struct_2_CC45B4503679E14E_51(*)(::RPG::GameCore::LevelPedestrianV2Info*, ::System::Collections::Generic::IEnumerable_1<::Struct_2_CC45B4503679E14E_51>*))((::PBYTE)hIl2Cpp + CLASS_1_51C144CA4DE074AC_METHOD_1_7326A523B5D39B37_OFFSET))(a1, a2);
	}
};
