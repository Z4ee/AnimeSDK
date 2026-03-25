#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_61D036A13B263279;
class Class_1_FAEC77BCA0A6C65B;
class Class_3_6AF1E5B02897ED63;
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2372A81090298262_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8776E90)
#define CLASS_1_2372A81090298262_METHOD_1_1B3D34596E65559A_OFFSET UNITYSDK_OFFSET(0x8777010)
#define CLASS_1_2372A81090298262_METHOD_1_419C8DF6F1DACB65_OFFSET UNITYSDK_OFFSET(0x8777190)
#define CLASS_1_2372A81090298262_METHOD_1_50C28BACDA4A6A63_OFFSET UNITYSDK_OFFSET(0x8777970)
#define CLASS_1_2372A81090298262_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x8777B10)
#define CLASS_1_2372A81090298262_METHOD_1_5354A13DDABA2EFA_OFFSET UNITYSDK_OFFSET(0x8777640)
#define CLASS_1_2372A81090298262_METHOD_1_6F03FB9B9F4E8889_OFFSET UNITYSDK_OFFSET(0x8777310)
#define CLASS_1_2372A81090298262_METHOD_1_A2FECA576332B43B_OFFSET UNITYSDK_OFFSET(0x87774C0)
#define CLASS_1_2372A81090298262_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x87775A0)
#define CLASS_1_2372A81090298262_METHOD_1_CCB93DB5F893C716_OFFSET UNITYSDK_OFFSET(0x8777760)
#define CLASS_1_2372A81090298262_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x8777AE0)
#define CLASS_1_2372A81090298262_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x8777AF0)
#define CLASS_1_2372A81090298262_METHOD_1_DCE4FE848CE6F3B5_OFFSET UNITYSDK_OFFSET(0x87778B0)
#define CLASS_1_2372A81090298262_METHOD_1_ED51C46008DA43B8_OFFSET UNITYSDK_OFFSET(0x87773E0)
#define CLASS_1_2372A81090298262__CTOR_OFFSET UNITYSDK_OFFSET(0x8776C50)

inline static constexpr unsigned int Class_1_2372A81090298262_TypeDefinitionIndex = 42133;

class Class_1_2372A81090298262 : public ::System::Object
{
public:
	::Class_3_6AF1E5B02897ED63* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::UInt32>>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_FAEC77BCA0A6C65B*>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_61D036A13B263279*>* Field_1_1; // 0x28
	::System::UInt64 Field_1_2; // 0x30
	::System::Single Field_1_4; // 0x38
	::UnityEngine::Vector3 Field_1_3; // 0x3C

	::System::Void _ctor(::RPG::GameCore::LevelSmartObjectInfo* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectInfo*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1B3D34596E65559A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_1B3D34596E65559A_OFFSET))(this, a1);
	}

	::System::Void Method_1_419C8DF6F1DACB65(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_419C8DF6F1DACB65_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED51C46008DA43B8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_ED51C46008DA43B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2FECA576332B43B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_A2FECA576332B43B_OFFSET))(this, a1);
	}

	::Class_1_FAEC77BCA0A6C65B* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_FAEC77BCA0A6C65B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_A917AC671DF6CB2D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5354A13DDABA2EFA(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_5354A13DDABA2EFA_OFFSET))(this, a1);
	}

	::Class_1_61D036A13B263279* Method_1_CCB93DB5F893C716(::System::UInt32 a1)
	{
		return ((::Class_1_61D036A13B263279*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_CCB93DB5F893C716_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCE4FE848CE6F3B5(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_DCE4FE848CE6F3B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6F03FB9B9F4E8889(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_6F03FB9B9F4E8889_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_50C28BACDA4A6A63(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_50C28BACDA4A6A63_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2372A81090298262_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
