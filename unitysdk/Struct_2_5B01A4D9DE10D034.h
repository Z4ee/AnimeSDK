#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Sample/SampleDynamicType.h"
#include "unitysdk/Struct_2_DC33E550141EBFE3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5B01A4D9DE10D034__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E471F0)
#define STRUCT_2_5B01A4D9DE10D034__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABCE0)

inline static constexpr unsigned int Struct_2_5B01A4D9DE10D034_TypeDefinitionIndex = 68150;

struct alignas(8) Struct_2_5B01A4D9DE10D034
{
	static ::Struct_2_5B01A4D9DE10D034* StaticGet_Field_2_0()
	{
		return (::Struct_2_5B01A4D9DE10D034*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5B01A4D9DE10D034_TypeDefinitionIndex)->GetStaticField(0x532B0);
	}
	::System::String* Field_2_1; // 0x10
	::RPG::Client::Sample::SampleDynamicType Field_2_2; // 0x18
	::Struct_2_DC33E550141EBFE3 Field_2_3; // 0x20

	::System::Void _ctor(::System::String* a1, ::RPG::Client::Sample::SampleDynamicType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Sample::SampleDynamicType))((::PBYTE)hIl2Cpp + STRUCT_2_5B01A4D9DE10D034__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5B01A4D9DE10D034__CCTOR_OFFSET))();
	}
};
