#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_5F4D64A4B97E38F9;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define SOFA_BASEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD08C230)

namespace Sofa
{
	inline static constexpr unsigned int BaseViewModel_TypeDefinitionIndex = 44995;

	class BaseViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
