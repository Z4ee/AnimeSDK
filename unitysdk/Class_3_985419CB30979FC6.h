#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D151FD175CE5B583.h"
#include "unitysdk/RPG/Client/WorkGroupType.h"

namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_985419CB30979FC6_METHOD_3_B8A15C4E76F9B694_OFFSET UNITYSDK_OFFSET(0xAC79A00)
#define CLASS_3_985419CB30979FC6__CTOR_OFFSET UNITYSDK_OFFSET(0xAC79B30)

inline static constexpr unsigned int Class_3_985419CB30979FC6_TypeDefinitionIndex = 57065;

class Class_3_985419CB30979FC6 : public ::Class_2_D151FD175CE5B583
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_985419CB30979FC6__CTOR_OFFSET))(this);
	}

	static ::Class_3_985419CB30979FC6* Method_3_B8A15C4E76F9B694(::RPG::Client::WorkGroupType a1, ::System::Object* a2, ::System::String* a3)
	{
		return ((::Class_3_985419CB30979FC6*(*)(::RPG::Client::WorkGroupType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_985419CB30979FC6_METHOD_3_B8A15C4E76F9B694_OFFSET))(a1, a2, a3);
	}
};
