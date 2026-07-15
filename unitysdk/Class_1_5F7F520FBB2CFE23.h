#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_623;
namespace RPG::Client { class MusicVisualization_SpectrumEffectBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5F7F520FBB2CFE23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F79D50)
#define CLASS_1_5F7F520FBB2CFE23_GET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x18F7BDF0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x18F7A360)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_288018307162726D_OFFSET UNITYSDK_OFFSET(0x18F7A4D0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_3EBB8CC7CE9832B7_OFFSET UNITYSDK_OFFSET(0x18F7AFF0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_6E57D3559C10FFA9_1_OFFSET UNITYSDK_OFFSET(0x18F79EB0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x18F79E60)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_73ECB962C2058A5E_OFFSET UNITYSDK_OFFSET(0x18F7ACD0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_7BBAF6FC4B3B41BD_OFFSET UNITYSDK_OFFSET(0x18F7A640)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_7F1EBB775AF956AD_OFFSET UNITYSDK_OFFSET(0x18F79F00)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_913947B6596EB50A_1_OFFSET UNITYSDK_OFFSET(0x18F7AB00)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x18F7A930)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_A3A5363DC5B4E085_OFFSET UNITYSDK_OFFSET(0x18F7A440)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_B454A31C7AC848CE_OFFSET UNITYSDK_OFFSET(0x18F7B0B0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_BE0159BABFB96321_OFFSET UNITYSDK_OFFSET(0x18F7A5B0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18F7BE10)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x18F7A2D0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_F56205DA0E1D126B_OFFSET UNITYSDK_OFFSET(0x18F7A1F0)
#define CLASS_1_5F7F520FBB2CFE23_METHOD_1_FA62BCB480AFF4EA_OFFSET UNITYSDK_OFFSET(0x18F7A240)
#define CLASS_1_5F7F520FBB2CFE23_SET_PLAYINGID_OFFSET UNITYSDK_OFFSET(0x18F7BE00)
#define CLASS_1_5F7F520FBB2CFE23__CTOR_OFFSET UNITYSDK_OFFSET(0x18F79CA0)

inline static constexpr unsigned int Class_1_5F7F520FBB2CFE23_TypeDefinitionIndex = 57106;

class Class_1_5F7F520FBB2CFE23 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x200; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_623*>* Field_1_1; // 0x10
	::Il2CppArray<::System::Single>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::MusicVisualization_SpectrumEffectBase*>* Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::UInt32 _PlayingID_k__BackingField; // 0x30
	::System::Int32 Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_6E57D3559C10FFA9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F1EBB775AF956AD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_7F1EBB775AF956AD_OFFSET))(this, a1);
	}

	::System::Single Method_1_F56205DA0E1D126B(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_F56205DA0E1D126B_OFFSET))(this, a1);
	}

	::System::Single Method_1_FA62BCB480AFF4EA(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_FA62BCB480AFF4EA_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_623* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_623*))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3A5363DC5B4E085(::Class_0_16E4307DCC419505_623* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_623*))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_A3A5363DC5B4E085_OFFSET))(this, a1);
	}

	::System::Void Method_1_288018307162726D(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_288018307162726D_OFFSET))(this, a1);
	}

	::System::Void Method_1_BE0159BABFB96321(::RPG::Client::MusicVisualization_SpectrumEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicVisualization_SpectrumEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_BE0159BABFB96321_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BBAF6FC4B3B41BD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_7BBAF6FC4B3B41BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_1_913947B6596EB50A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_913947B6596EB50A_1_OFFSET))(this);
	}

	::System::Void Method_1_73ECB962C2058A5E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_73ECB962C2058A5E_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Single>* Method_1_3EBB8CC7CE9832B7()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_3EBB8CC7CE9832B7_OFFSET))(this);
	}

	::System::Void Method_1_B454A31C7AC848CE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_B454A31C7AC848CE_OFFSET))(this, a1);
	}

	::System::UInt32 get_PlayingID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_GET_PLAYINGID_OFFSET))(this);
	}

	::System::Void set_PlayingID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_SET_PLAYINGID_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F7F520FBB2CFE23_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
