#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_1_5ADE9B70BF082592_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91C92A0)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x91C92F0)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x91C9210)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_ECC139DE5D3EC3E5_OFFSET UNITYSDK_OFFSET(0x91C9160)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_EE9AC25F77B9BEB8_OFFSET UNITYSDK_OFFSET(0x91C93F0)
#define CLASS_1_5ADE9B70BF082592_METHOD_1_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x91C9380)
#define CLASS_1_5ADE9B70BF082592__CTOR_OFFSET UNITYSDK_OFFSET(0x91C9200)

inline static constexpr unsigned int Class_1_5ADE9B70BF082592_TypeDefinitionIndex = 66453;

class Class_1_5ADE9B70BF082592 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

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

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_EE9AC25F77B9BEB8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5ADE9B70BF082592_METHOD_1_EE9AC25F77B9BEB8_OFFSET))(this, a1);
	}
};
