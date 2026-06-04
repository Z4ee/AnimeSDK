#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_1_2B4C9D5EFCB958DD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1362D0A0)
#define CLASS_1_2B4C9D5EFCB958DD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1362D0D0)
#define CLASS_1_2B4C9D5EFCB958DD___C___SHOWLAST_B__9_0_OFFSET UNITYSDK_OFFSET(0x1362D0E0)

inline static constexpr unsigned int Class_1_2B4C9D5EFCB958DD___c_TypeDefinitionIndex = 68215;

class Class_1_2B4C9D5EFCB958DD___c : public ::System::Object
{
public:
	static ::Class_1_2B4C9D5EFCB958DD___c** StaticGet___9()
	{
		return (::Class_1_2B4C9D5EFCB958DD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B4C9D5EFCB958DD___c_TypeDefinitionIndex)->GetStaticField(0x49430);
	}
	static ::System::Converter_2<::RPG::Client::UIController*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__9_0()
	{
		return (::System::Converter_2<::RPG::Client::UIController*, ::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B4C9D5EFCB958DD___c_TypeDefinitionIndex)->GetStaticField(0x49438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ShowLast_b__9_0(::RPG::Client::UIController* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD___C___SHOWLAST_B__9_0_OFFSET))(this, a1);
	}
};
