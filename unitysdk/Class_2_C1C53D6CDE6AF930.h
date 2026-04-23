#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTransformAdaptor_2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_3.h"
#include "unitysdk/Struct_2_59BE5B1187A98C1F.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_65FD3404AD490CB1;
class Class_1_D459106EFEFB0716;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xA547DD0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA5471A0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xA547EF0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_65B612B6C3A1EA50_OFFSET UNITYSDK_OFFSET(0xA5477E0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xA547F80)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0xA547500)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA547250)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA547200)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_D576072A5004A133_OFFSET UNITYSDK_OFFSET(0xA547740)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_E38AE2756558CA05_OFFSET UNITYSDK_OFFSET(0xA5472B0)
#define CLASS_2_C1C53D6CDE6AF930_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xA5480B0)
#define CLASS_2_C1C53D6CDE6AF930_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xA548160)
#define CLASS_2_C1C53D6CDE6AF930_ONSTART_OFFSET UNITYSDK_OFFSET(0xA546FD0)
#define CLASS_2_C1C53D6CDE6AF930_ONSTOP_OFFSET UNITYSDK_OFFSET(0xA547050)
#define CLASS_2_C1C53D6CDE6AF930__CTOR_OFFSET UNITYSDK_OFFSET(0xA5481F0)
#define CLASS_2_C1C53D6CDE6AF930___IFIXBASEPROXY_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xA5482A0)
#define CLASS_2_C1C53D6CDE6AF930___IFIXBASEPROXY_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xA548380)
#define CLASS_2_C1C53D6CDE6AF930___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xA548210)
#define CLASS_2_C1C53D6CDE6AF930___IFIXBASEPROXY_ONSTOP_OFFSET UNITYSDK_OFFSET(0xA548290)

inline static constexpr unsigned int Class_2_C1C53D6CDE6AF930_TypeDefinitionIndex = 49970;

class Class_2_C1C53D6CDE6AF930 : public ::RPG::GameCore::RtTransformAdaptor_2<::Struct_2_4C8453486C91E3A1_3, ::Struct_2_59BE5B1187A98C1F>
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x50
	::Class_1_65FD3404AD490CB1* Field_2_0; // 0x58
	::RPG::MVector3 Field_2_1; // 0x60
	::System::Boolean Field_2_2; // 0x6C
	::System::Boolean Field_2_3; // 0x6D
	::System::Boolean Field_2_7; // 0x6E
	::System::Int32 Field_2_4; // 0x70
	::UnityEngine::Vector3 Field_2_6; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_ONSTART_OFFSET))(this);
	}

	::System::Void OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_E38AE2756558CA05(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_E38AE2756558CA05_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_65B612B6C3A1EA50(::System::Single a1, ::RPG::MVector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_65B612B6C3A1EA50_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_2_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnRefreshPos(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_ONREFRESHPOS_OFFSET))(this, a1);
	}

	::Class_1_D459106EFEFB0716* Method_2_D576072A5004A133()
	{
		return ((::Class_1_D459106EFEFB0716*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_D576072A5004A133_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930___IFIXBASEPROXY_ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930___IFIXBASEPROXY_ONSTOP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAnimatorMove(::UnityEngine::Animator* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930___IFIXBASEPROXY_ONANIMATORMOVE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnRefreshPos(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930___IFIXBASEPROXY_ONREFRESHPOS_OFFSET))(this, P0);
	}
};
