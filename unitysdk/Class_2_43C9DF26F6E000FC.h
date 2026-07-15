#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_5FA8339464381844;
class Class_1_66D6A0360B93D27A_1;
class Class_1_C4D20E7B3D5ABE35;
class Class_1_D17272E82AE804C2_414;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_43C9DF26F6E000FC_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x176F0340)
#define CLASS_2_43C9DF26F6E000FC_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x176F0480)
#define CLASS_2_43C9DF26F6E000FC_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x176F0A90)
#define CLASS_2_43C9DF26F6E000FC_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x176F0390)
#define CLASS_2_43C9DF26F6E000FC_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x176F0FE0)
#define CLASS_2_43C9DF26F6E000FC_UPDATEPROJECTIONADD_OFFSET UNITYSDK_OFFSET(0x176F0660)
#define CLASS_2_43C9DF26F6E000FC_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x176F0800)
#define CLASS_2_43C9DF26F6E000FC__CTOR_OFFSET UNITYSDK_OFFSET(0x176F1030)

inline static constexpr unsigned int Class_2_43C9DF26F6E000FC_TypeDefinitionIndex = 62257;

class Class_2_43C9DF26F6E000FC : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::Class_1_5FA8339464381844* Field_2_0; // 0x10
	::Class_1_C4D20E7B3D5ABE35* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20
	::Enum_3_75A1C8C41006A504 Field_2_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_66D6A0360B93D27A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateProjectionAdd(::Class_1_D17272E82AE804C2_414* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_414*))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEPROJECTIONADD_OFFSET))(this, a1);
	}

	::System::Void UpdateRemoveRole(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEREMOVEROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Void UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C9DF26F6E000FC_UPDATEDONE_OFFSET))(this);
	}
};
