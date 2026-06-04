#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_137AB23E3A00ECA1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }

#define CLASS_1_48B6206075BC2645_METHOD_1_0B683A6711C0D5F7_OFFSET UNITYSDK_OFFSET(0xA753E30)
#define CLASS_1_48B6206075BC2645_METHOD_1_120B8A5AEEE4ED9E_OFFSET UNITYSDK_OFFSET(0xA753EB0)
#define CLASS_1_48B6206075BC2645__CTOR_OFFSET UNITYSDK_OFFSET(0xA753F30)

inline static constexpr unsigned int Class_1_48B6206075BC2645_TypeDefinitionIndex = 58741;

class Class_1_48B6206075BC2645 : public ::System::Object
{
public:
	::RPG::Client::LRUCache_2<::Struct_2_137AB23E3A00ECA1, ::RPG::Client::IAvatarSkinData*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48B6206075BC2645__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0B683A6711C0D5F7(::Struct_2_137AB23E3A00ECA1& a1, ::RPG::Client::IAvatarSkinData*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1&, ::RPG::Client::IAvatarSkinData*&))((::PBYTE)hIl2Cpp + CLASS_1_48B6206075BC2645_METHOD_1_0B683A6711C0D5F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_120B8A5AEEE4ED9E(::Struct_2_137AB23E3A00ECA1& a1, ::RPG::Client::IAvatarSkinData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1&, ::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + CLASS_1_48B6206075BC2645_METHOD_1_120B8A5AEEE4ED9E_OFFSET))(this, a1, a2);
	}
};
