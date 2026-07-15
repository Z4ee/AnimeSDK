#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

namespace RPG::Client { class GridFightPlayerChangeData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_FA872565CA45CE6E_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x171E5DA0)
#define CLASS_2_FA872565CA45CE6E_METHOD_2_1C92751553E32AE6_OFFSET UNITYSDK_OFFSET(0x171E5EB0)
#define CLASS_2_FA872565CA45CE6E_METHOD_2_B38DD5E8D6679D46_OFFSET UNITYSDK_OFFSET(0x171E5CD0)
#define CLASS_2_FA872565CA45CE6E_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x171E5E00)
#define CLASS_2_FA872565CA45CE6E_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x171E6050)
#define CLASS_2_FA872565CA45CE6E_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x171E6260)
#define CLASS_2_FA872565CA45CE6E_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x171E66C0)
#define CLASS_2_FA872565CA45CE6E__CTOR_OFFSET UNITYSDK_OFFSET(0x171E68D0)

inline static constexpr unsigned int Class_2_FA872565CA45CE6E_TypeDefinitionIndex = 62146;

class Class_2_FA872565CA45CE6E : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::RPG::Client::GridFightPlayerChangeData* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA872565CA45CE6E__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_2_B38DD5E8D6679D46(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FA872565CA45CE6E_METHOD_2_B38DD5E8D6679D46_OFFSET))(this, a1, a2);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_FA872565CA45CE6E_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FA872565CA45CE6E_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1C92751553E32AE6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FA872565CA45CE6E_METHOD_2_1C92751553E32AE6_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FA872565CA45CE6E_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FA872565CA45CE6E_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateMaxRoleNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FA872565CA45CE6E_UPDATEMAXROLENUM_OFFSET))(this, a1);
	}
};
