#pragma once
#include "unitysdk/unitysdk.h"

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int GeneratorSupport_TypeDefinitionIndex = 4054;

	enum class GeneratorSupport : ::System::Int32
	{
		ArraysOfArrays = 1,
		AssemblyAttributes = 4096,
		ChainedConstructorArguments = 32768,
		ComplexExpressions = 524288,
		DeclareDelegates = 512,
		DeclareEnums = 256,
		DeclareEvents = 2048,
		DeclareIndexerProperties = 33554432,
		DeclareInterfaces = 1024,
		DeclareValueTypes = 128,
		EntryPointMethod = 2,
		GenericTypeDeclaration = 16777216,
		GenericTypeReference = 8388608,
		GotoStatements = 4,
		MultidimensionalArrays = 8,
		MultipleInterfaceMembers = 131072,
		NestedTypes = 65536,
		ParameterAttributes = 8192,
		PartialTypes = 4194304,
		PublicStaticMembers = 262144,
		ReferenceParameters = 16384,
		Resources = 2097152,
		ReturnTypeAttributes = 64,
		StaticConstructors = 16,
		TryCatchStatements = 32,
		Win32Resources = 1048576,
	};
}
