#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A01E51E263E7AB9B.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4BAF41C500DED921_METHOD_2_0A32ABCEA39CED97_OFFSET UNITYSDK_OFFSET(0x8AA59E0)
#define CLASS_2_4BAF41C500DED921_METHOD_2_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x8AA5A60)
#define CLASS_2_4BAF41C500DED921_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8AA5B20)
#define CLASS_2_4BAF41C500DED921__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA5960)

inline static constexpr unsigned int Class_2_4BAF41C500DED921_TypeDefinitionIndex = 64435;

class Class_2_4BAF41C500DED921 : public ::Class_1_A01E51E263E7AB9B
{
public:
	::Il2CppArray<::System::Int32>* Field_2_0; // 0x30

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* a3, ::System::Int32 a4, ::Il2CppArray<::System::Int32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_4BAF41C500DED921__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_0A32ABCEA39CED97(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BAF41C500DED921_METHOD_2_0A32ABCEA39CED97_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BAF41C500DED921_METHOD_2_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BAF41C500DED921_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
