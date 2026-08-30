#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_758;
class Class_1_3944BB4E8D54A4E2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_58FECF0C9E45347C_METHOD_1_35E8CC5FF5AAF7E7_OFFSET UNITYSDK_OFFSET(0x15CC3DA0)
#define CLASS_1_58FECF0C9E45347C_METHOD_1_3F968946B36E9A86_OFFSET UNITYSDK_OFFSET(0x15CC3F70)
#define CLASS_1_58FECF0C9E45347C_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x15CC3B80)
#define CLASS_1_58FECF0C9E45347C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC40F0)

inline static constexpr unsigned int Class_1_58FECF0C9E45347C_TypeDefinitionIndex = 62592;

class Class_1_58FECF0C9E45347C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_1_3944BB4E8D54A4E2*>* IAFNNMFIMOI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58FECF0C9E45347C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58FECF0C9E45347C_METHOD_1_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_1_35E8CC5FF5AAF7E7(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_58FECF0C9E45347C_METHOD_1_35E8CC5FF5AAF7E7_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_758* Method_1_3F968946B36E9A86(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_758*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_58FECF0C9E45347C_METHOD_1_3F968946B36E9A86_OFFSET))(this, a1);
	}
};
