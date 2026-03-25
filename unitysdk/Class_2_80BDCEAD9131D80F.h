#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3897C88E8C59E725.h"

namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_2_80BDCEAD9131D80F_METHOD_2_1C6136E170351E7E_OFFSET UNITYSDK_OFFSET(0x11111490)
#define CLASS_2_80BDCEAD9131D80F_METHOD_2_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x11111580)
#define CLASS_2_80BDCEAD9131D80F__CTOR_OFFSET UNITYSDK_OFFSET(0x11111340)

inline static constexpr unsigned int Class_2_80BDCEAD9131D80F_TypeDefinitionIndex = 52887;

class Class_2_80BDCEAD9131D80F : public ::Class_1_3897C88E8C59E725
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_80BDCEAD9131D80F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C6136E170351E7E(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_80BDCEAD9131D80F_METHOD_2_1C6136E170351E7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80BDCEAD9131D80F_METHOD_2_C9A3013DD208C696_OFFSET))(this);
	}
};
