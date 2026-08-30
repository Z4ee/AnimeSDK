#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_1_5ADE9B70BF082592_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF41CF10)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xF41CE50)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_ECC139DE5D3EC3E5_OFFSET UNITYSDK_OFFSET(0xF41CDA0)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0xF41D020)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0xF41D090)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xF41CF60)
#define CLASS_1_5ADE9B70BF082592__CTOR_OFFSET UNITYSDK_OFFSET(0xF41CE40)

inline static constexpr unsigned int Class_1_5ADE9B70BF082592_TypeDefinitionIndex = 72062;

class Class_1_5ADE9B70BF082592 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
	::System::Action* OBGBLOGOLOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592__CTOR_OFFSET))(this);
	}

	static ::Class_1_5ADE9B70BF082592* Method_1_ECC139DE5D3EC3E5(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
	{
		return ((::Class_1_5ADE9B70BF082592*(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_ECC139DE5D3EC3E5_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_F25D2DE7181D2805_OFFSET))(this);
	}

	::System::Void Method_1_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_F69068FADEFBD596_OFFSET))(this, a1);
	}
};
