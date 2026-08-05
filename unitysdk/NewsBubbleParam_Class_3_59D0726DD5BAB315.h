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

#define NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13DFDD50)
#define NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13DFDD60)
#define NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315_WRITE_OFFSET UNITYSDK_OFFSET(0x13DFDFC0)
#define NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DFE180)
#define NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315__CTOR_OFFSET UNITYSDK_OFFSET(0x13DFE140)

inline static constexpr unsigned int NewsBubbleParam_Class_3_59D0726DD5BAB315_TypeDefinitionIndex = 60533;

class NewsBubbleParam_Class_3_59D0726DD5BAB315 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::NewsBubbleParam*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>*>** StaticGet_Field_3_0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(NewsBubbleParam_Class_3_59D0726DD5BAB315_TypeDefinitionIndex)->GetStaticField(0x4DC90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::NewsBubbleParam*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::NewsBubbleParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Write(::NewsBubbleParam*& a1, ::Sirenix::Serialization::IDataWriter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::NewsBubbleParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_CLASS_3_59D0726DD5BAB315_WRITE_OFFSET))(this, a1, a2);
	}
};
