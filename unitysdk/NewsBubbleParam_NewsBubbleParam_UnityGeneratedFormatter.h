#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class NewsBubbleParam;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF07A330)
#define NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF07A340)
#define NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xF07A5F0)
#define NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF07A7F0)
#define NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xF07A7B0)

inline static constexpr unsigned int NewsBubbleParam_NewsBubbleParam_UnityGeneratedFormatter_TypeDefinitionIndex = 76062;

class NewsBubbleParam_NewsBubbleParam_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NewsBubbleParam*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(NewsBubbleParam_NewsBubbleParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x35A90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::NewsBubbleParam*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
	{
		return ((::System::Boolean(*)(::PVOID, ::NewsBubbleParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
	}

	::System::Void Write(::NewsBubbleParam*& value, ::Sirenix::Serialization::IDataWriter* writer)
	{
		return ((::System::Void(*)(::PVOID, ::NewsBubbleParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_NEWSBUBBLEPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
	}
};
