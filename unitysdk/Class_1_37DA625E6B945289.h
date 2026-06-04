#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_37DA625E6B945289_METHOD_1_F2AE6D45228225ED_OFFSET UNITYSDK_OFFSET(0x138BD230)

inline static constexpr unsigned int Class_1_37DA625E6B945289_TypeDefinitionIndex = 46332;

class Class_1_37DA625E6B945289 : public ::System::Object
{
public:
	static ::System::String* Method_1_F2AE6D45228225ED(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_37DA625E6B945289_METHOD_1_F2AE6D45228225ED_OFFSET))(a1, a2);
	}
};
