#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E532212A47602002;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_56DCA686EC0FCFD0___C_METHOD_1_3DC64182395C2CA3_OFFSET UNITYSDK_OFFSET(0x17865880)
#define CLASS_3_56DCA686EC0FCFD0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17865830)
#define CLASS_3_56DCA686EC0FCFD0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17865870)

inline static constexpr unsigned int Class_3_56DCA686EC0FCFD0___c_TypeDefinitionIndex = 82851;

class Class_3_56DCA686EC0FCFD0___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_E532212A47602002*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_E532212A47602002*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_56DCA686EC0FCFD0___c_TypeDefinitionIndex)->GetStaticField(0x35060);
	}
	static ::Class_3_56DCA686EC0FCFD0___c** StaticGet___9()
	{
		return (::Class_3_56DCA686EC0FCFD0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_56DCA686EC0FCFD0___c_TypeDefinitionIndex)->GetStaticField(0x35068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_56DCA686EC0FCFD0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56DCA686EC0FCFD0___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3DC64182395C2CA3(::Class_3_E532212A47602002* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E532212A47602002*))((::PBYTE)hIl2Cpp + CLASS_3_56DCA686EC0FCFD0___C_METHOD_1_3DC64182395C2CA3_OFFSET))(this, a1);
	}
};
