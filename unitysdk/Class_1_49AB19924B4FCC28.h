#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PedestrianNode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49AB19924B4FCC28__CTOR_OFFSET UNITYSDK_OFFSET(0x154CD970)

inline static constexpr unsigned int Class_1_49AB19924B4FCC28_TypeDefinitionIndex = 69191;

class Class_1_49AB19924B4FCC28 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OFIMPDDGIOE; // 0x10
	::System::String* AKKHHEJMELA; // 0x18
	::RPG::GameCore::PedestrianNode EOJENDKOHOF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49AB19924B4FCC28__CTOR_OFFSET))(this);
	}
};
