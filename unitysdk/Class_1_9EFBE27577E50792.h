#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9EFBE27577E50792_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB26CDD0)
#define CLASS_1_9EFBE27577E50792_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xB26C1E0)
#define CLASS_1_9EFBE27577E50792_METHOD_1_00004B41EFDB322F_OFFSET UNITYSDK_OFFSET(0xB26CBD0)
#define CLASS_1_9EFBE27577E50792_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xB26C650)
#define CLASS_1_9EFBE27577E50792_METHOD_1_1E1B584909E026DF_OFFSET UNITYSDK_OFFSET(0xB26C530)
#define CLASS_1_9EFBE27577E50792_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xB26C210)
#define CLASS_1_9EFBE27577E50792_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xB26C200)
#define CLASS_1_9EFBE27577E50792_METHOD_1_905C5B739E978596_OFFSET UNITYSDK_OFFSET(0xB26C2A0)
#define CLASS_1_9EFBE27577E50792_METHOD_1_97445C748F8ED5C4_OFFSET UNITYSDK_OFFSET(0xB26C370)
#define CLASS_1_9EFBE27577E50792_METHOD_1_BBF1FF1CE4B71F13_OFFSET UNITYSDK_OFFSET(0xB26C460)
#define CLASS_1_9EFBE27577E50792_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB26C290)
#define CLASS_1_9EFBE27577E50792_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xB26C1F0)
#define CLASS_1_9EFBE27577E50792__CCTOR_OFFSET UNITYSDK_OFFSET(0xB26CE20)
#define CLASS_1_9EFBE27577E50792__CTOR_OFFSET UNITYSDK_OFFSET(0xB26C970)

inline static constexpr unsigned int Class_1_9EFBE27577E50792_TypeDefinitionIndex = 71147;

class Class_1_9EFBE27577E50792 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_GMIODKLGJHD()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EFBE27577E50792_TypeDefinitionIndex)->GetStaticField(0x20C60);
	}
	static ::System::UInt32* StaticGet_LFKDNJKBIGP()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EFBE27577E50792_TypeDefinitionIndex)->GetStaticField(0x74F0);
	}
	::RPG::Client::MonoEmoBlendShapesController* _Controller_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* BIOEMGDAOMM; // 0x18
	::System::Single KJLHNBJMPDC; // 0x20
	::System::Boolean ADMEOMGNNDN; // 0x24
	::System::UInt32 DKLOGEOIHCJ; // 0x28

	::System::Void _ctor(::RPG::Client::MonoEmoBlendShapesController* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoBlendShapesController*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792__CCTOR_OFFSET))();
	}

	::RPG::Client::MonoEmoBlendShapesController* get_Controller()
	{
		return ((::RPG::Client::MonoEmoBlendShapesController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_GET_CONTROLLER_OFFSET))(this);
	}

	::System::Void set_Controller(::RPG::Client::MonoEmoBlendShapesController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoBlendShapesController*))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_SET_CONTROLLER_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_905C5B739E978596(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_905C5B739E978596_OFFSET))(this, a1);
	}

	::System::Void Method_1_97445C748F8ED5C4(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_97445C748F8ED5C4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_BBF1FF1CE4B71F13(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_BBF1FF1CE4B71F13_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E1B584909E026DF(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_1E1B584909E026DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_1_00004B41EFDB322F(::Class_1_9EFBE27577E50792* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9EFBE27577E50792*))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_METHOD_1_00004B41EFDB322F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFBE27577E50792_DISPOSE_OFFSET))(this);
	}
};
