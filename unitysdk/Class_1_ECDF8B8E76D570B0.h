#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define CLASS_1_ECDF8B8E76D570B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1660C370)
#define CLASS_1_ECDF8B8E76D570B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1660C360)

inline static constexpr unsigned int Class_1_ECDF8B8E76D570B0_TypeDefinitionIndex = 28860;

class Class_1_ECDF8B8E76D570B0 : public ::System::Object
{
public:
	static ::MessagePack::IFormatterResolver** StaticGet_Field_1_0()
	{
		return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECDF8B8E76D570B0_TypeDefinitionIndex)->GetStaticField(0x269F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECDF8B8E76D570B0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECDF8B8E76D570B0__CCTOR_OFFSET))();
	}
};
