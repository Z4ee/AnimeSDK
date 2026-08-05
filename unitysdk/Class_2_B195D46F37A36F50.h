#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkPositionArray;
class Class_2_B195D46F37A36F50_Class_1_F3B8E87D5DC46ECB;
class Class_3_4875884AB352B34E;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole { class MonoEffectPluginAudio; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B195D46F37A36F50_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E8C270)
#define CLASS_2_B195D46F37A36F50_METHOD_2_0D679CBC199DE86A_OFFSET UNITYSDK_OFFSET(0x12E8C810)
#define CLASS_2_B195D46F37A36F50_METHOD_2_3DA3D1CD5449A60D_OFFSET UNITYSDK_OFFSET(0x12E8F2D0)
#define CLASS_2_B195D46F37A36F50_METHOD_2_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x12E8C400)
#define CLASS_2_B195D46F37A36F50_METHOD_2_7AB9DA741212CD9F_OFFSET UNITYSDK_OFFSET(0x12E8F650)
#define CLASS_2_B195D46F37A36F50_METHOD_2_A0829675717DF498_OFFSET UNITYSDK_OFFSET(0x12E8DA00)
#define CLASS_2_B195D46F37A36F50_METHOD_2_EC4FBD04A3CAD580_OFFSET UNITYSDK_OFFSET(0x12E8E840)
#define CLASS_2_B195D46F37A36F50_METHOD_2_FEA88D9B491A4DF7_OFFSET UNITYSDK_OFFSET(0x12E8CA10)
#define CLASS_2_B195D46F37A36F50_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12E8C0E0)
#define CLASS_2_B195D46F37A36F50_UPDATE_OFFSET UNITYSDK_OFFSET(0x12E8C370)
#define CLASS_2_B195D46F37A36F50__CTOR_OFFSET UNITYSDK_OFFSET(0x12E8C7B0)

inline static constexpr unsigned int Class_2_B195D46F37A36F50_TypeDefinitionIndex = 78175;

class Class_2_B195D46F37A36F50 : public ::Foundation::SingletonDisposable_1<::Class_2_B195D46F37A36F50*>
{
public:
	// static const ::System::Int32 Field_2_7 = 0xA; // 0x0
	// static const ::System::Int32 Field_2_6 = 0x40; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_B195D46F37A36F50_Class_1_F3B8E87D5DC46ECB*>* Field_2_2; // 0x10
	::AkPositionArray* Field_2_5; // 0x18
	::System::Collections::Generic::HashSet_1<::Class_3_D6DA183EF60F02C8*>* Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_METHOD_2_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_2_A0829675717DF498(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_METHOD_2_A0829675717DF498_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_EC4FBD04A3CAD580(::Class_3_D6DA183EF60F02C8* a1, ::MoleMole::MonoEffectPluginAudio* a2, ::UnityEngine::Transform* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::MoleMole::MonoEffectPluginAudio*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_METHOD_2_EC4FBD04A3CAD580_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0D679CBC199DE86A(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_METHOD_2_0D679CBC199DE86A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DA3D1CD5449A60D(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_METHOD_2_3DA3D1CD5449A60D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FEA88D9B491A4DF7(::Class_2_B195D46F37A36F50_Class_1_F3B8E87D5DC46ECB* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B195D46F37A36F50_Class_1_F3B8E87D5DC46ECB*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_METHOD_2_FEA88D9B491A4DF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7AB9DA741212CD9F(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_B195D46F37A36F50_METHOD_2_7AB9DA741212CD9F_OFFSET))(this, a1, a2);
	}
};
