#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_53FE437E9943B46A_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x143A1FB0)
#define CLASS_1_53FE437E9943B46A_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x143A1F30)
#define CLASS_1_53FE437E9943B46A__CCTOR_OFFSET UNITYSDK_OFFSET(0x143A2050)
#define CLASS_1_53FE437E9943B46A__CTOR_OFFSET UNITYSDK_OFFSET(0x143A2040)

inline static constexpr unsigned int Class_1_53FE437E9943B46A_TypeDefinitionIndex = 45447;

class Class_1_53FE437E9943B46A : public ::System::Object
{
public:
	static ::Class_1_53FE437E9943B46A** StaticGet_Field_1_0()
	{
		return (::Class_1_53FE437E9943B46A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53FE437E9943B46A_TypeDefinitionIndex)->GetStaticField(0x35350);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53FE437E9943B46A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_53FE437E9943B46A__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::Config::Spline_WayPoint a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::Config::Spline_WayPoint, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_53FE437E9943B46A_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::Spline_WayPoint Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::Config::Spline_WayPoint(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_53FE437E9943B46A_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
