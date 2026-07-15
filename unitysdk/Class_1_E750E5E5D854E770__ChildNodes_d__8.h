#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E750E5E5D854E770;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D24CA80)
#define CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D24CDA0)
#define CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D24CD30)
#define CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D24CE00)
#define CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D24CD90)
#define CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D24CD40)
#define CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D24CA70)
#define CLASS_1_E750E5E5D854E770__CHILDNODES_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x1D24C790)

inline static constexpr unsigned int Class_1_E750E5E5D854E770__ChildNodes_d__8_TypeDefinitionIndex = 39455;

class Class_1_E750E5E5D854E770__ChildNodes_d__8 : public ::System::Object
{
public:
	::Class_1_E750E5E5D854E770* __2__current; // 0x10
	::Class_1_E750E5E5D854E770* _node_5__3; // 0x18
	::Class_1_E750E5E5D854E770* __4__this; // 0x20
	::System::Int32 __l__initialThreadId; // 0x28
	::System::Int32 __1__state; // 0x2C
	::System::Int32 _j_5__4; // 0x30
	::System::Int32 _i_5__2; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E750E5E5D854E770__CHILDNODES_D__8__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_MOVENEXT_OFFSET))(this);
	}

	::Class_1_E750E5E5D854E770* System_Collections_Generic_IEnumerator_RPG_Client_CompilerFramework_Syntax_SyntaxNode__get_Current()
	{
		return ((::Class_1_E750E5E5D854E770*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_E750E5E5D854E770*>* System_Collections_Generic_IEnumerable_RPG_Client_CompilerFramework_Syntax_SyntaxNode__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_E750E5E5D854E770*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E750E5E5D854E770__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
