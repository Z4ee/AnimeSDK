#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelBuffDisplayConfig; }
namespace System { class String; }

#define CLASS_2_89D1CDC33902C8B6_CLASS_2_72B0D83486F1EA39_CLASS_1_8230E0B6788EA5F5__CTOR_OFFSET UNITYSDK_OFFSET(0x997A260)

inline static constexpr unsigned int Class_2_89D1CDC33902C8B6_Class_2_72B0D83486F1EA39_Class_1_8230E0B6788EA5F5_TypeDefinitionIndex = 71039;

class Class_2_89D1CDC33902C8B6_Class_2_72B0D83486F1EA39_Class_1_8230E0B6788EA5F5 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::GameCore::ChimeraDuelBuffDisplayConfig* Field_1_2; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89D1CDC33902C8B6_CLASS_2_72B0D83486F1EA39_CLASS_1_8230E0B6788EA5F5__CTOR_OFFSET))(this);
	}
};
