#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class NetPacket; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define CLASS_1_D257E23AA91A5931_METHOD_1_05D4DB44B105F122_OFFSET UNITYSDK_OFFSET(0x19F82F70)
#define CLASS_1_D257E23AA91A5931_METHOD_1_AC3331CB9F743F2E_OFFSET UNITYSDK_OFFSET(0x19F8ED90)
#define CLASS_1_D257E23AA91A5931_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x19F82EA0)
#define CLASS_1_D257E23AA91A5931__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8FD20)

inline static constexpr unsigned int Class_1_D257E23AA91A5931_TypeDefinitionIndex = 40497;

class Class_1_D257E23AA91A5931 : public ::System::Object
{
public:
	static ::Class_1_D257E23AA91A5931** StaticGet_Field_1_0()
	{
		return (::Class_1_D257E23AA91A5931**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D257E23AA91A5931_TypeDefinitionIndex)->GetStaticField(0x4E9E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::Stack_1<::Google::Protobuf::IMessage*>*>* Field_1_1; // 0x10
	::Class_1_64C1E63642C4A2DF<::RPG::Client::NetPacket*>* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D257E23AA91A5931__CTOR_OFFSET))(this);
	}

	static ::Class_1_D257E23AA91A5931* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_D257E23AA91A5931*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D257E23AA91A5931_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::RPG::Client::NetPacket* Method_1_AC3331CB9F743F2E()
	{
		return ((::RPG::Client::NetPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D257E23AA91A5931_METHOD_1_AC3331CB9F743F2E_OFFSET))(this);
	}

	::System::Void Method_1_05D4DB44B105F122(::RPG::Client::NetPacket* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + CLASS_1_D257E23AA91A5931_METHOD_1_05D4DB44B105F122_OFFSET))(this, a1);
	}
};
