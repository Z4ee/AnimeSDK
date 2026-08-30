#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8BD8B458C2AE3E06;

#define CLASS_1_77DCA6662B95347C_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1985DDB0)
#define CLASS_1_77DCA6662B95347C_METHOD_1_E77EF20D2131A60F_OFFSET UNITYSDK_OFFSET(0x1985DE40)
#define CLASS_1_77DCA6662B95347C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1985E0C0)
#define CLASS_1_77DCA6662B95347C__CTOR_OFFSET UNITYSDK_OFFSET(0x1985DE30)

inline static constexpr unsigned int Class_1_77DCA6662B95347C_TypeDefinitionIndex = 74974;

class Class_1_77DCA6662B95347C : public ::System::Object
{
public:
	static ::Class_1_77DCA6662B95347C** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_77DCA6662B95347C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77DCA6662B95347C_TypeDefinitionIndex)->GetStaticField(0x65A70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77DCA6662B95347C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77DCA6662B95347C__CCTOR_OFFSET))();
	}

	static ::Class_1_77DCA6662B95347C* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_77DCA6662B95347C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77DCA6662B95347C_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_E77EF20D2131A60F(::Class_2_8BD8B458C2AE3E06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8BD8B458C2AE3E06*))((::PBYTE)hIl2Cpp + CLASS_1_77DCA6662B95347C_METHOD_1_E77EF20D2131A60F_OFFSET))(this, a1);
	}
};
