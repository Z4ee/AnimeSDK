#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_1_5ADE9B70BF082592_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD800920)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xD800970)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xD800860)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_ECC139DE5D3EC3E5_OFFSET UNITYSDK_OFFSET(0xD8007B0)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0xD800A30)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0xD800AA0)
#define CLASS_1_5ADE9B70BF082592__CTOR_OFFSET UNITYSDK_OFFSET(0xD800850)

inline static constexpr unsigned int Class_1_5ADE9B70BF082592_TypeDefinitionIndex = 67391;

class Class_1_5ADE9B70BF082592 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

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

	::System::Void Method_1_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_1_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_F69068FADEFBD596_OFFSET))(this, a1);
	}
};
