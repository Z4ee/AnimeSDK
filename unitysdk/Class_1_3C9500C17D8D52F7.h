#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_820C30D315519AFE;
namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournTitanBless; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3C9500C17D8D52F7_METHOD_1_539F63C7CAFFF8E6_OFFSET UNITYSDK_OFFSET(0x17047D50)
#define CLASS_1_3C9500C17D8D52F7_METHOD_1_77B3C57F6963FB1D_OFFSET UNITYSDK_OFFSET(0x170482A0)
#define CLASS_1_3C9500C17D8D52F7_METHOD_1_7F2E8AA73E2A7441_OFFSET UNITYSDK_OFFSET(0x170472B0)
#define CLASS_1_3C9500C17D8D52F7_METHOD_1_7F2FC5D215DEDCED_OFFSET UNITYSDK_OFFSET(0x17047800)
#define CLASS_1_3C9500C17D8D52F7_METHOD_1_89EBE7FCECE9CE8F_OFFSET UNITYSDK_OFFSET(0x170487F0)
#define CLASS_1_3C9500C17D8D52F7_METHOD_1_9B09C088B37CD183_OFFSET UNITYSDK_OFFSET(0x17046D30)

inline static constexpr unsigned int Class_1_3C9500C17D8D52F7_TypeDefinitionIndex = 64870;

class Class_1_3C9500C17D8D52F7 : public ::System::Object
{
public:
	static ::System::String* Method_1_9B09C088B37CD183(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>* a1)
	{
		return ((::System::String*(*)(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C9500C17D8D52F7_METHOD_1_9B09C088B37CD183_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* Method_1_7F2E8AA73E2A7441(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C9500C17D8D52F7_METHOD_1_7F2E8AA73E2A7441_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* Method_1_7F2FC5D215DEDCED(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>*(*)(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C9500C17D8D52F7_METHOD_1_7F2FC5D215DEDCED_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Method_1_539F63C7CAFFF8E6(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>*(*)(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C9500C17D8D52F7_METHOD_1_539F63C7CAFFF8E6_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>* Method_1_77B3C57F6963FB1D(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournTitanBless*>*(*)(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C9500C17D8D52F7_METHOD_1_77B3C57F6963FB1D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* Method_1_89EBE7FCECE9CE8F(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::System::Collections::Generic::IList_1<::Class_1_820C30D315519AFE*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C9500C17D8D52F7_METHOD_1_89EBE7FCECE9CE8F_OFFSET))(a1);
	}
};
