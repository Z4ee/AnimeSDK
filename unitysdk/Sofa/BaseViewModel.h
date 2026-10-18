#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_1294FEF8E985635C;
namespace System { class String; }

#define SOFA_BASEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE96B840)

namespace Sofa
{
	inline static constexpr unsigned int BaseViewModel_TypeDefinitionIndex = 49699;

	class BaseViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_1294FEF8E985635C* _Messenger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
