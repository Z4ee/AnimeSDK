#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_59FE36FE68A3720A_METHOD_1_90EF356D6D3F4600_OFFSET UNITYSDK_OFFSET(0x8C32D80)
#define CLASS_1_59FE36FE68A3720A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8C32C50)
#define CLASS_1_59FE36FE68A3720A_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x8C32CE0)
#define CLASS_1_59FE36FE68A3720A__CTOR_OFFSET UNITYSDK_OFFSET(0x8C32B80)
#define CLASS_1_59FE36FE68A3720A___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8C32D90)

inline static constexpr unsigned int Class_1_59FE36FE68A3720A_TypeDefinitionIndex = 54564;

class Class_1_59FE36FE68A3720A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + CLASS_1_59FE36FE68A3720A__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59FE36FE68A3720A_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59FE36FE68A3720A_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Method_1_90EF356D6D3F4600()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59FE36FE68A3720A_METHOD_1_90EF356D6D3F4600_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59FE36FE68A3720A___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
