#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_665;
class Class_0_16E4307DCC419505_666;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1980312AC66EE882_METHOD_1_0199A1261DA325FD_OFFSET UNITYSDK_OFFSET(0x915E840)
#define CLASS_1_1980312AC66EE882_METHOD_1_F37485A7BA66FCA5_1_OFFSET UNITYSDK_OFFSET(0x915E6C0)
#define CLASS_1_1980312AC66EE882_METHOD_1_F37485A7BA66FCA5_OFFSET UNITYSDK_OFFSET(0x915E530)
#define CLASS_1_1980312AC66EE882__CTOR_OFFSET UNITYSDK_OFFSET(0x915E8E0)

inline static constexpr unsigned int Class_1_1980312AC66EE882_TypeDefinitionIndex = 57688;

class Class_1_1980312AC66EE882 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_0_16E4307DCC419505_665*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1980312AC66EE882__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_F37485A7BA66FCA5(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::Class_0_16E4307DCC419505_666* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_1980312AC66EE882_METHOD_1_F37485A7BA66FCA5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_1_F37485A7BA66FCA5_1(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::Class_0_16E4307DCC419505_666* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_1980312AC66EE882_METHOD_1_F37485A7BA66FCA5_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0199A1261DA325FD(::RPG::GameCore::AvatarPropertyType a1, ::Class_0_16E4307DCC419505_665* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Class_0_16E4307DCC419505_665*))((::PBYTE)hIl2Cpp + CLASS_1_1980312AC66EE882_METHOD_1_0199A1261DA325FD_OFFSET))(this, a1, a2);
	}
};
