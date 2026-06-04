#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_465E3DC13CE68267;
namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }

#define CLASS_1_742C9A640157152F_10_METHOD_1_1262E0406B45DE6B_OFFSET UNITYSDK_OFFSET(0x18BC6E80)
#define CLASS_1_742C9A640157152F_10_METHOD_1_22F33BBC28BFC695_OFFSET UNITYSDK_OFFSET(0x18BC7030)
#define CLASS_1_742C9A640157152F_10_METHOD_1_2C749D98084E96B2_OFFSET UNITYSDK_OFFSET(0x18BC6FA0)
#define CLASS_1_742C9A640157152F_10_METHOD_1_9B711920422D359A_OFFSET UNITYSDK_OFFSET(0x18BC7150)
#define CLASS_1_742C9A640157152F_10_METHOD_1_B58A2B3F72CE699F_OFFSET UNITYSDK_OFFSET(0x18BC70C0)
#define CLASS_1_742C9A640157152F_10_METHOD_1_D7985E2E4F464CC9_OFFSET UNITYSDK_OFFSET(0x18BC6E20)
#define CLASS_1_742C9A640157152F_10__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC71E0)

inline static constexpr unsigned int Class_1_742C9A640157152F_10_TypeDefinitionIndex = 39151;

class Class_1_742C9A640157152F_10 : public ::System::Object
{
public:
	static ::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>** StaticGet_Field_1_0()
	{
		return (::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_742C9A640157152F_10_TypeDefinitionIndex)->GetStaticField(0x278D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_742C9A640157152F_10__CTOR_OFFSET))(this);
	}

	static ::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>* Method_1_D7985E2E4F464CC9()
	{
		return ((::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_742C9A640157152F_10_METHOD_1_D7985E2E4F464CC9_OFFSET))();
	}

	static ::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>* Method_1_1262E0406B45DE6B()
	{
		return ((::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_742C9A640157152F_10_METHOD_1_1262E0406B45DE6B_OFFSET))();
	}

	static ::Entitas::IAllOfMatcher_1<::Class_2_465E3DC13CE68267*>* Method_1_2C749D98084E96B2(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::Entitas::IAllOfMatcher_1<::Class_2_465E3DC13CE68267*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_742C9A640157152F_10_METHOD_1_2C749D98084E96B2_OFFSET))(a1);
	}

	static ::Entitas::IAllOfMatcher_1<::Class_2_465E3DC13CE68267*>* Method_1_22F33BBC28BFC695(::Il2CppArray<::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>*>* a1)
	{
		return ((::Entitas::IAllOfMatcher_1<::Class_2_465E3DC13CE68267*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_742C9A640157152F_10_METHOD_1_22F33BBC28BFC695_OFFSET))(a1);
	}

	static ::Entitas::IAnyOfMatcher_1<::Class_2_465E3DC13CE68267*>* Method_1_B58A2B3F72CE699F(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::Entitas::IAnyOfMatcher_1<::Class_2_465E3DC13CE68267*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_742C9A640157152F_10_METHOD_1_B58A2B3F72CE699F_OFFSET))(a1);
	}

	static ::Entitas::IAnyOfMatcher_1<::Class_2_465E3DC13CE68267*>* Method_1_9B711920422D359A(::Il2CppArray<::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>*>* a1)
	{
		return ((::Entitas::IAnyOfMatcher_1<::Class_2_465E3DC13CE68267*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::Class_2_465E3DC13CE68267*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_742C9A640157152F_10_METHOD_1_9B711920422D359A_OFFSET))(a1);
	}
};
