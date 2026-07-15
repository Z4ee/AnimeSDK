#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_66D6A0360B93D27A_1;
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_E4C686A29415AE98_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x186BE340)
#define CLASS_2_E4C686A29415AE98_METHOD_2_4EAC90433F8D078E_OFFSET UNITYSDK_OFFSET(0x186BEBA0)
#define CLASS_2_E4C686A29415AE98_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x186BEDF0)
#define CLASS_2_E4C686A29415AE98_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x186BEC50)
#define CLASS_2_E4C686A29415AE98_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x186BE500)
#define CLASS_2_E4C686A29415AE98_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x186BED00)
#define CLASS_2_E4C686A29415AE98__CTOR_OFFSET UNITYSDK_OFFSET(0x186BEE40)

inline static constexpr unsigned int Class_2_E4C686A29415AE98_TypeDefinitionIndex = 62016;

class Class_2_E4C686A29415AE98 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x10
	::RPG::Client::GridFightBonusResultData* Field_2_1; // 0x18
	::RPG::Client::GridFightEquipItemData* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4EAC90433F8D078E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_METHOD_2_4EAC90433F8D078E_OFFSET))(this, a1);
	}

	::System::Void UpdateAddRole(::Class_1_66D6A0360B93D27A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_UPDATEDONE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
