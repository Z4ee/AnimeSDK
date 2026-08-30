#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LocalizedText; }
namespace System { template <typename T1, typename T2> class Action_2; }
template <typename T> class Class_1_534AF681CC2BD5FD_101___c__3_1;

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_101___c__3_1_TypeDefinitionIndex = 50276;

template <typename TViewModel>
class Class_1_534AF681CC2BD5FD_101___c__3_1 : public ::System::Object
{
public:
	static ::Class_1_534AF681CC2BD5FD_101___c__3_1<TViewModel>** StaticGet___9()
	{
		return (::Class_1_534AF681CC2BD5FD_101___c__3_1<TViewModel>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_101___c__3_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_2<::RPG::Client::LocalizedText*, ::RPG::Client::TextID>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::RPG::Client::LocalizedText*, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_101___c__3_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
