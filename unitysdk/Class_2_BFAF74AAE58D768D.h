#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkPositionArray;
class Class_2_BFAF74AAE58D768D_Class_1_F3B8E87D5DC46ECB;
class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class MonoEffectPluginAudio; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BFAF74AAE58D768D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16620E50)
#define CLASS_2_BFAF74AAE58D768D_METHOD_2_071C7C66D17336FC_OFFSET UNITYSDK_OFFSET(0x16621760)
#define CLASS_2_BFAF74AAE58D768D_METHOD_2_0D679CBC199DE86A_OFFSET UNITYSDK_OFFSET(0x16623AD0)
#define CLASS_2_BFAF74AAE58D768D_METHOD_2_3DA3D1CD5449A60D_OFFSET UNITYSDK_OFFSET(0x166213E0)
#define CLASS_2_BFAF74AAE58D768D_METHOD_2_47E6246C75628CA7_OFFSET UNITYSDK_OFFSET(0x16623030)
#define CLASS_2_BFAF74AAE58D768D_METHOD_2_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x16620FD0)
#define CLASS_2_BFAF74AAE58D768D_METHOD_2_A0829675717DF498_OFFSET UNITYSDK_OFFSET(0x16624CB0)
#define CLASS_2_BFAF74AAE58D768D_METHOD_2_FEA88D9B491A4DF7_OFFSET UNITYSDK_OFFSET(0x16623CE0)
#define CLASS_2_BFAF74AAE58D768D_ONCREATE_OFFSET UNITYSDK_OFFSET(0x16620CC0)
#define CLASS_2_BFAF74AAE58D768D_UPDATE_OFFSET UNITYSDK_OFFSET(0x16620F40)
#define CLASS_2_BFAF74AAE58D768D__CTOR_OFFSET UNITYSDK_OFFSET(0x16621380)

inline static constexpr unsigned int Class_2_BFAF74AAE58D768D_TypeDefinitionIndex = 65701;

class Class_2_BFAF74AAE58D768D : public ::Foundation::SingletonDisposable_1<::Class_2_BFAF74AAE58D768D*>
{
public:
	// static const ::System::Int32 Field_2_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x40; // 0x0
	::System::Collections::Generic::HashSet_1<::Class_3_D6DA183EF60F02C8*>* Field_2_1; // 0x10
	::AkPositionArray* Field_2_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_BFAF74AAE58D768D_Class_1_F3B8E87D5DC46ECB*>* Field_2_0; // 0x20
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_3DA3D1CD5449A60D(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_METHOD_2_3DA3D1CD5449A60D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_071C7C66D17336FC(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_METHOD_2_071C7C66D17336FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_METHOD_2_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_2_FEA88D9B491A4DF7(::Class_2_BFAF74AAE58D768D_Class_1_F3B8E87D5DC46ECB* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BFAF74AAE58D768D_Class_1_F3B8E87D5DC46ECB*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_METHOD_2_FEA88D9B491A4DF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0D679CBC199DE86A(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_METHOD_2_0D679CBC199DE86A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_47E6246C75628CA7(::Class_3_D6DA183EF60F02C8* a1, ::MoleMole::MonoEffectPluginAudio* a2, ::UnityEngine::Transform* a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::MoleMole::MonoEffectPluginAudio*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_METHOD_2_47E6246C75628CA7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A0829675717DF498(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_METHOD_2_A0829675717DF498_OFFSET))(this, a1, a2);
	}
};
