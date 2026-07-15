#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/MessageParser.h"

namespace System { template <typename T> class Func_1; }

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int MessageParser_1_TypeDefinitionIndex = 34295;

	template <typename T>
	class MessageParser_1 : public ::MiHoYo::SDK::Protobuf::MessageParser
	{
	public:
		::System::Func_1<T>* factory; // 0x0
	};
}
