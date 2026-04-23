#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/Struct_2_87263CD1B0FC9B7D.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RtCharacterFlagVisual; }
namespace RPG::GameCore { class RtCharacterVisual; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EEF18899F0DE5C2D_METHOD_1_1085B073A2D0BE26_OFFSET UNITYSDK_OFFSET(0x11A3F0A0)
#define CLASS_1_EEF18899F0DE5C2D_METHOD_1_2E5D861EED9890B2_OFFSET UNITYSDK_OFFSET(0x11A3F0E0)
#define CLASS_1_EEF18899F0DE5C2D_METHOD_1_81B91E393925E0D6_OFFSET UNITYSDK_OFFSET(0x11A3F560)
#define CLASS_1_EEF18899F0DE5C2D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11A3F0C0)
#define CLASS_1_EEF18899F0DE5C2D_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x11A3F060)
#define CLASS_1_EEF18899F0DE5C2D_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0x11A3F080)
#define CLASS_1_EEF18899F0DE5C2D_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x11A3F040)
#define CLASS_1_EEF18899F0DE5C2D__CTOR_OFFSET UNITYSDK_OFFSET(0x11A3F550)

inline static constexpr unsigned int Class_1_EEF18899F0DE5C2D_TypeDefinitionIndex = 49749;

class Class_1_EEF18899F0DE5C2D : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_87263CD1B0FC9B7D>* Field_1_3; // 0x10
	::RPG::GameCore::RtCharacterVisual* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x20
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* Field_1_2; // 0x28
	::System::Int32 Field_1_6; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 Field_1_4; // 0x38
	::System::Int32 Field_1_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEF18899F0DE5C2D__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEF18899F0DE5C2D_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEF18899F0DE5C2D_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEF18899F0DE5C2D_METHOD_1_FB4BE762B6186C23_2_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_1085B073A2D0BE26()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEF18899F0DE5C2D_METHOD_1_1085B073A2D0BE26_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEF18899F0DE5C2D_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_2E5D861EED9890B2(::RPG::GameCore::RtCharacterVisual* a1, ::Il2CppArray<::RPG::GameCore::RtCharacterFlagVisual*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterVisual*, ::Il2CppArray<::RPG::GameCore::RtCharacterFlagVisual*>*))((::PBYTE)hIl2Cpp + CLASS_1_EEF18899F0DE5C2D_METHOD_1_2E5D861EED9890B2_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_81B91E393925E0D6(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EEF18899F0DE5C2D_METHOD_1_81B91E393925E0D6_OFFSET))(this, a1);
	}
};
