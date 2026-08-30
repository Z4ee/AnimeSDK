#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_2_9783A3D129DD371C_METHOD_2_E4EE4D98EE55C81B_OFFSET UNITYSDK_OFFSET(0x1D0DC910)
#define CLASS_2_9783A3D129DD371C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DCA60)

inline static constexpr unsigned int Class_2_9783A3D129DD371C_TypeDefinitionIndex = 19651;

class Class_2_9783A3D129DD371C : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* IIDJKFFMDIC; // 0x10
	::System::UInt32 PIOBMEHHDGG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9783A3D129DD371C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_E4EE4D98EE55C81B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_9783A3D129DD371C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_9783A3D129DD371C*&))((::PBYTE)hIl2Cpp + CLASS_2_9783A3D129DD371C_METHOD_2_E4EE4D98EE55C81B_OFFSET))(a1, a2);
	}
};
