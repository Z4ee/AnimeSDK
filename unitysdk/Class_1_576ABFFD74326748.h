#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarComparer; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_576ABFFD74326748_METHOD_1_1E43ED384E792893_OFFSET UNITYSDK_OFFSET(0x16A6CCF0)
#define CLASS_1_576ABFFD74326748_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x16A6CC80)
#define CLASS_1_576ABFFD74326748_METHOD_1_AA820431A7F75A50_OFFSET UNITYSDK_OFFSET(0x16A6CED0)
#define CLASS_1_576ABFFD74326748_METHOD_1_FC9089208F146D76_OFFSET UNITYSDK_OFFSET(0x16A6CE10)
#define CLASS_1_576ABFFD74326748__CTOR_OFFSET UNITYSDK_OFFSET(0x16A6D0D0)

inline static constexpr unsigned int Class_1_576ABFFD74326748_TypeDefinitionIndex = 60020;

class Class_1_576ABFFD74326748 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IAvatarComparer*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_576ABFFD74326748__CTOR_OFFSET))(this);
	}

	::Class_1_576ABFFD74326748* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_576ABFFD74326748*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_576ABFFD74326748_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::Class_1_576ABFFD74326748* Method_1_1E43ED384E792893(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::Boolean a2)
	{
		return ((::Class_1_576ABFFD74326748*(*)(::PVOID, ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_576ABFFD74326748_METHOD_1_1E43ED384E792893_OFFSET))(this, a1, a2);
	}

	::Class_1_576ABFFD74326748* Method_1_FC9089208F146D76(::RPG::Client::IAvatarComparer* a1)
	{
		return ((::Class_1_576ABFFD74326748*(*)(::PVOID, ::RPG::Client::IAvatarComparer*))((::PBYTE)hIl2Cpp + CLASS_1_576ABFFD74326748_METHOD_1_FC9089208F146D76_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarComparer* Method_1_AA820431A7F75A50()
	{
		return ((::RPG::Client::IAvatarComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_576ABFFD74326748_METHOD_1_AA820431A7F75A50_OFFSET))(this);
	}
};
