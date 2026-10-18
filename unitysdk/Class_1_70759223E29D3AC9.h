#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_70759223E29D3AC9_METHOD_1_088A6C7E0212A5AA_OFFSET UNITYSDK_OFFSET(0xBDF1C60)
#define CLASS_1_70759223E29D3AC9_METHOD_1_9BADCBA864987C33_OFFSET UNITYSDK_OFFSET(0xBDF1FB0)

inline static constexpr unsigned int Class_1_70759223E29D3AC9_TypeDefinitionIndex = 79983;

class Class_1_70759223E29D3AC9 : public ::System::Object
{
public:
	static ::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_088A6C7E0212A5AA(::RPG::Client::TextID a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_70759223E29D3AC9_METHOD_1_088A6C7E0212A5AA_OFFSET))(a1);
	}

	static ::System::Void Method_1_9BADCBA864987C33(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::System::Action_1<::System::Boolean>* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_70759223E29D3AC9_METHOD_1_9BADCBA864987C33_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
