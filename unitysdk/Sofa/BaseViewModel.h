#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_D501FC103C8A2714;
namespace System { class String; }

#define SOFA_BASEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE975DB0)

namespace Sofa
{
	inline static constexpr unsigned int BaseViewModel_TypeDefinitionIndex = 49699;

	class BaseViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_D501FC103C8A2714* _Messenger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
