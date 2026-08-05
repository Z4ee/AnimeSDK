#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_785FDC7D0DA58280;
namespace DG::Tweening { class Tweener; }
namespace System { class Action; }

#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_0E3548A81DF4AB0D_OFFSET UNITYSDK_OFFSET(0x1EC10CB0)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_15B341C815DEBE7D_OFFSET UNITYSDK_OFFSET(0x1EC10870)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_41A65CD6A0F4418F_OFFSET UNITYSDK_OFFSET(0x1EC10240)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x1EC105A0)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_51871805A0A3F6C7_OFFSET UNITYSDK_OFFSET(0x1EC05F50)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x1EC101A0)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1EC10EB0)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1EC101F0)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EC10860)
#define CLASS_2_5ED3D62F6E668FDA_METHOD_2_FFD5DDE0995D1523_OFFSET UNITYSDK_OFFSET(0x1EC10B90)
#define CLASS_2_5ED3D62F6E668FDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC10230)

inline static constexpr unsigned int Class_2_5ED3D62F6E668FDA_TypeDefinitionIndex = 94866;

class Class_2_5ED3D62F6E668FDA : public ::Class_1_321489CFFF7B18E7
{
public:
	::DG::Tweening::Tweener* Field_2_0; // 0x18
	::System::Boolean Field_2_7; // 0x20
	::System::Boolean Field_2_1; // 0x21
	::System::Single Field_2_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_41A65CD6A0F4418F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_41A65CD6A0F4418F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_15B341C815DEBE7D(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_15B341C815DEBE7D_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Boolean Method_2_51871805A0A3F6C7(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_51871805A0A3F6C7_OFFSET))(a1, a2);
	}

	::UnityEngine::Vector3 Method_2_0E3548A81DF4AB0D(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_0E3548A81DF4AB0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FFD5DDE0995D1523(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_FFD5DDE0995D1523_OFFSET))(this, a1);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED3D62F6E668FDA_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
