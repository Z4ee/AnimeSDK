#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define CLASS_1_EFCFA216F7060182_METHOD_1_6DDB3C41B72F144E_OFFSET UNITYSDK_OFFSET(0xC9FF4C0)

inline static constexpr unsigned int Class_1_EFCFA216F7060182_TypeDefinitionIndex = 62680;

class Class_1_EFCFA216F7060182 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_6DDB3C41B72F144E(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::ICollection_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::ICollection_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFCFA216F7060182_METHOD_1_6DDB3C41B72F144E_OFFSET))(a1, a2);
	}
};
