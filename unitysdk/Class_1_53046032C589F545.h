#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
class Class_0_16E4307DCC419505_574;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_53046032C589F545_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x115DDB30)
#define CLASS_1_53046032C589F545_METHOD_1_5F2C517187317CE7_OFFSET UNITYSDK_OFFSET(0x115DDF60)
#define CLASS_1_53046032C589F545_METHOD_1_81441E8FAE30D2F2_OFFSET UNITYSDK_OFFSET(0x115DDD10)
#define CLASS_1_53046032C589F545_METHOD_1_B204BE7EF34EE1D1_OFFSET UNITYSDK_OFFSET(0x115DDFD0)
#define CLASS_1_53046032C589F545__CTOR_OFFSET UNITYSDK_OFFSET(0x115DE100)

inline static constexpr unsigned int Class_1_53046032C589F545_TypeDefinitionIndex = 50809;

class Class_1_53046032C589F545 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_0_16E4307DCC419505_574*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53046032C589F545__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53046032C589F545_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_81441E8FAE30D2F2(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_53046032C589F545_METHOD_1_81441E8FAE30D2F2_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_573* Method_1_B204BE7EF34EE1D1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_53046032C589F545_METHOD_1_B204BE7EF34EE1D1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_574* Method_1_5F2C517187317CE7(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_574*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_53046032C589F545_METHOD_1_5F2C517187317CE7_OFFSET))(this, a1);
	}
};
